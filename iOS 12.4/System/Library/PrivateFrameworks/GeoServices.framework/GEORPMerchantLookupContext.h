/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOPDMapsIdentifier, GEOLocation;

@interface GEORPMerchantLookupContext : PBCodable <NSCopying> {

	long long _merchantIndustryCode;
	double _transactionTime;
	NSString* _correlationId;
	NSString* _merchantAdamId;
	NSString* _merchantFormattedAddress;
	GEOPDMapsIdentifier* _merchantId;
	NSString* _merchantIndustryCategory;
	NSString* _merchantName;
	NSString* _merchantRawName;
	NSString* _merchantUrl;
	GEOLocation* _transactionLocation;
	NSString* _transactionType;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasMerchantIndustryCode; 
@property (assign,nonatomic) long long merchantIndustryCode;                   //@synthesize merchantIndustryCode=_merchantIndustryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * merchantId;                 //@synthesize merchantId=_merchantId - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantName; 
@property (nonatomic,retain) NSString * merchantName;                          //@synthesize merchantName=_merchantName - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantRawName; 
@property (nonatomic,retain) NSString * merchantRawName;                       //@synthesize merchantRawName=_merchantRawName - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantIndustryCategory; 
@property (nonatomic,retain) NSString * merchantIndustryCategory;              //@synthesize merchantIndustryCategory=_merchantIndustryCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantUrl; 
@property (nonatomic,retain) NSString * merchantUrl;                           //@synthesize merchantUrl=_merchantUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantFormattedAddress; 
@property (nonatomic,retain) NSString * merchantFormattedAddress;              //@synthesize merchantFormattedAddress=_merchantFormattedAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantAdamId; 
@property (nonatomic,retain) NSString * merchantAdamId;                        //@synthesize merchantAdamId=_merchantAdamId - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionTime; 
@property (assign,nonatomic) double transactionTime;                           //@synthesize transactionTime=_transactionTime - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionType; 
@property (nonatomic,retain) NSString * transactionType;                       //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation;                //@synthesize transactionLocation=_transactionLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrelationId; 
@property (nonatomic,retain) NSString * correlationId;                         //@synthesize correlationId=_correlationId - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMerchantName:(NSString *)arg1 ;
-(void)setMerchantId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasMerchantName;
-(BOOL)hasMerchantId;
-(NSString *)merchantName;
-(GEOPDMapsIdentifier *)merchantId;
-(void)setMerchantRawName:(NSString *)arg1 ;
-(void)setMerchantIndustryCategory:(NSString *)arg1 ;
-(void)setMerchantUrl:(NSString *)arg1 ;
-(void)setMerchantFormattedAddress:(NSString *)arg1 ;
-(void)setMerchantAdamId:(NSString *)arg1 ;
-(void)setTransactionType:(NSString *)arg1 ;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(void)setCorrelationId:(NSString *)arg1 ;
-(void)setMerchantIndustryCode:(long long)arg1 ;
-(void)setHasMerchantIndustryCode:(BOOL)arg1 ;
-(BOOL)hasMerchantIndustryCode;
-(BOOL)hasMerchantRawName;
-(BOOL)hasMerchantIndustryCategory;
-(BOOL)hasMerchantUrl;
-(BOOL)hasMerchantFormattedAddress;
-(BOOL)hasMerchantAdamId;
-(void)setTransactionTime:(double)arg1 ;
-(void)setHasTransactionTime:(BOOL)arg1 ;
-(BOOL)hasTransactionTime;
-(BOOL)hasTransactionType;
-(BOOL)hasTransactionLocation;
-(BOOL)hasCorrelationId;
-(long long)merchantIndustryCode;
-(NSString *)merchantRawName;
-(NSString *)merchantIndustryCategory;
-(NSString *)merchantUrl;
-(NSString *)merchantFormattedAddress;
-(NSString *)merchantAdamId;
-(double)transactionTime;
-(NSString *)transactionType;
-(GEOLocation *)transactionLocation;
-(NSString *)correlationId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
