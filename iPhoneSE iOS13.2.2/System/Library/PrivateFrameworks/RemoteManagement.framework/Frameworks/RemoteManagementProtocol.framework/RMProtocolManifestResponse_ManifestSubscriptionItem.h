/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMProtocolManifestResponse_ManifestSubscriptionItem : RMModelPayloadBase {

	NSString* _responseIdentifier;
	NSString* _responseServerToken;

}

@property (nonatomic,copy) NSString * responseIdentifier;               //@synthesize responseIdentifier=_responseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * responseServerToken;              //@synthesize responseServerToken=_responseServerToken - In the implementation block
+(id)allowedResponseKeys;
+(id)buildWithIdentifier:(id)arg1 serverToken:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 serverToken:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setResponseIdentifier:(NSString *)arg1 ;
-(NSString *)responseIdentifier;
-(void)setResponseServerToken:(NSString *)arg1 ;
-(NSString *)responseServerToken;
@end

