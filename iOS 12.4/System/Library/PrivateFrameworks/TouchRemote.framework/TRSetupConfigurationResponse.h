/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage {

	BOOL _needsNetwork;
	NSSet* _unauthenticatedAccountServices;

}

@property (assign,nonatomic) BOOL needsNetwork;                                 //@synthesize needsNetwork=_needsNetwork - In the implementation block
@property (nonatomic,copy) NSSet * unauthenticatedAccountServices;              //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(void)setNeedsNetwork:(BOOL)arg1 ;
-(NSSet *)unauthenticatedAccountServices;
-(id)_stringFromAccountServices:(id)arg1 ;
-(BOOL)needsNetwork;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

