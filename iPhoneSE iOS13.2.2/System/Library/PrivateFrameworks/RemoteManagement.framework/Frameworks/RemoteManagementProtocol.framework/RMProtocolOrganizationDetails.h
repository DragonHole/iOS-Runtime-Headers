/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails_Proof;

@interface RMProtocolOrganizationDetails : RMModelPayloadBase {

	NSString* _detailsName;
	NSString* _detailsEmail;
	NSString* _detailsURL;
	RMProtocolOrganizationDetails_Proof* _detailsProof;

}

@property (nonatomic,copy) NSString * detailsName;                                          //@synthesize detailsName=_detailsName - In the implementation block
@property (nonatomic,copy) NSString * detailsEmail;                                         //@synthesize detailsEmail=_detailsEmail - In the implementation block
@property (nonatomic,copy) NSString * detailsURL;                                           //@synthesize detailsURL=_detailsURL - In the implementation block
@property (nonatomic,copy) RMProtocolOrganizationDetails_Proof * detailsProof;              //@synthesize detailsProof=_detailsProof - In the implementation block
+(id)requestWithName:(id)arg1 email:(id)arg2 URL:(id)arg3 proof:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setDetailsName:(NSString *)arg1 ;
-(void)setDetailsEmail:(NSString *)arg1 ;
-(void)setDetailsURL:(NSString *)arg1 ;
-(void)setDetailsProof:(RMProtocolOrganizationDetails_Proof *)arg1 ;
-(NSString *)detailsName;
-(NSString *)detailsEmail;
-(NSString *)detailsURL;
-(RMProtocolOrganizationDetails_Proof *)detailsProof;
@end

