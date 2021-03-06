/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString, NSDictionary;

@interface AALoginDelegatesResponse : AAResponse

@property (nonatomic,readonly) NSNumber * status; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSDictionary * responseParameters; 
@property (nonatomic,readonly) NSString * dsid; 
@property (nonatomic,readonly) NSString * altDSID; 
-(id)responseParametersForServiceIdentifier:(id)arg1 ;
-(id)augmentedResponseParametersForServiceIdentifier:(id)arg1 withAppleID:(id)arg2 password:(id)arg3 DSID:(id)arg4 altDSID:(id)arg5 ;
-(NSDictionary *)responseParameters;
-(NSString *)statusMessage;
-(NSString *)altDSID;
-(NSString *)dsid;
-(NSNumber *)status;
@end

