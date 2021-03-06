/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface STKSessionBehavior : NSObject <BSXPCCoding> {

	double _timeout;
	BOOL _shouldSendResponseUponDisplay;
	BOOL _dismissesAfterUserEvent;

}

@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) BOOL shouldSendResponseUponDisplay;              //@synthesize shouldSendResponseUponDisplay=_shouldSendResponseUponDisplay - In the implementation block
@property (nonatomic,readonly) BOOL dismissesAfterUserEvent;                    //@synthesize dismissesAfterUserEvent=_dismissesAfterUserEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)dismissesAfterUserEvent;
-(BOOL)shouldSendResponseUponDisplay;
@end

