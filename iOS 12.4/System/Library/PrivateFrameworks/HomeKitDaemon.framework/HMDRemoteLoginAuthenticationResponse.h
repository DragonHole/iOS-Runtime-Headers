/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMRemoteLoginMessage.h>
#import <libobjc.A.dylib/HMRemoteLoginMessageProtocol.h>

@class ACAccount, NSString, NSDictionary;

@interface HMDRemoteLoginAuthenticationResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {

	ACAccount* _loggedInAccount;

}

@property (nonatomic,retain) ACAccount * loggedInAccount;                  //@synthesize loggedInAccount=_loggedInAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
+(BOOL)supportsSecureCoding;
-(id)messageName;
-(NSDictionary *)messagePayload;
-(id)xpcMessageName;
-(ACAccount *)loggedInAccount;
-(void)setLoggedInAccount:(ACAccount *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
@end

