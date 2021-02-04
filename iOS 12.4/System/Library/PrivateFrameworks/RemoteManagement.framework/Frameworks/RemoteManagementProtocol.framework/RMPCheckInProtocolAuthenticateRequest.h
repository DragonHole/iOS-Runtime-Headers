/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface RMPCheckInProtocolAuthenticateRequest : CEMPayloadBase {

	NSString* _messageType;
	NSString* _topic;
	NSString* _UDID;
	NSString* _osVersion;
	NSString* _buildVersion;
	NSString* _productName;
	NSString* _serialNumber;
	NSString* _IMEI;
	NSString* _MEID;

}

@property (nonatomic,copy) NSString * messageType;               //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy) NSString * topic;                     //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy) NSString * UDID;                      //@synthesize UDID=_UDID - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                 //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * buildVersion;              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy) NSString * productName;               //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * IMEI;                      //@synthesize IMEI=_IMEI - In the implementation block
@property (nonatomic,copy) NSString * MEID;                      //@synthesize MEID=_MEID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)request;
-(void)setIMEI:(NSString *)arg1 ;
-(void)setMEID:(NSString *)arg1 ;
-(void)setMessageType:(NSString *)arg1 ;
-(NSString *)osVersion;
-(NSString *)productName;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)messageType;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)IMEI;
-(NSString *)UDID;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)MEID;
-(NSString *)serialNumber;
-(id)serialize;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)topic;
-(void)setBuildVersion:(NSString *)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setUDID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)buildVersion;
@end
