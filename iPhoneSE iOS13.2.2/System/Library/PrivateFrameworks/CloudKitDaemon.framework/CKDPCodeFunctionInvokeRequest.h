/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPCodeFunctionInvokeRequestAttestationRequest, NSString, CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata, NSData;

@interface CKDPCodeFunctionInvokeRequest : PBRequest <NSCopying> {

	CKDPCodeFunctionInvokeRequestAttestationRequest* _attestationRequest;
	NSString* _functionName;
	CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata* _protectedCloudComputeMetadata;
	NSData* _serializedParameters;
	NSString* _serviceName;

}

@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                                                                                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasFunctionName; 
@property (nonatomic,retain) NSString * functionName;                                                                                 //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) BOOL hasSerializedParameters; 
@property (nonatomic,retain) NSData * serializedParameters;                                                                           //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedCloudComputeMetadata; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata * protectedCloudComputeMetadata;              //@synthesize protectedCloudComputeMetadata=_protectedCloudComputeMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasAttestationRequest; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeRequestAttestationRequest * attestationRequest;                                    //@synthesize attestationRequest=_attestationRequest - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)serviceName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSString *)functionName;
-(void)setFunctionName:(NSString *)arg1 ;
-(BOOL)hasServiceName;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(void)setProtectedCloudComputeMetadata:(CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *)arg1 ;
-(void)setAttestationRequest:(CKDPCodeFunctionInvokeRequestAttestationRequest *)arg1 ;
-(BOOL)hasFunctionName;
-(BOOL)hasSerializedParameters;
-(BOOL)hasProtectedCloudComputeMetadata;
-(BOOL)hasAttestationRequest;
-(CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *)protectedCloudComputeMetadata;
-(CKDPCodeFunctionInvokeRequestAttestationRequest *)attestationRequest;
@end
