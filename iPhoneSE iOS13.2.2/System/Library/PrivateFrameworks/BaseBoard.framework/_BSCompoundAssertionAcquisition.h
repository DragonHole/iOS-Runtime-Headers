/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class BSCompoundAssertion, NSString;

@interface _BSCompoundAssertionAcquisition : NSObject <BSInvalidatable> {

	atomic_flag _invalid;
	BSCompoundAssertion* _assertion;
	NSString* _reason;
	id _context;

}

@property (assign,nonatomic,__weak) BSCompoundAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) NSString * reason;                                     //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) id context;                                          //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(NSString *)reason;
-(id)context;
-(void)setContext:(id)arg1 ;
-(BSCompoundAssertion *)assertion;
-(void)setAssertion:(BSCompoundAssertion *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

