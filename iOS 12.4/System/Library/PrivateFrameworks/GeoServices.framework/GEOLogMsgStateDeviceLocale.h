/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying> {

	NSString* _deviceInputLocale;
	NSString* _deviceOutputLocale;
	NSString* _deviceSettingsLocale;

}

@property (nonatomic,readonly) BOOL hasDeviceSettingsLocale; 
@property (nonatomic,retain) NSString * deviceSettingsLocale;              //@synthesize deviceSettingsLocale=_deviceSettingsLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInputLocale; 
@property (nonatomic,retain) NSString * deviceInputLocale;                 //@synthesize deviceInputLocale=_deviceInputLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceOutputLocale; 
@property (nonatomic,retain) NSString * deviceOutputLocale;                //@synthesize deviceOutputLocale=_deviceOutputLocale - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeviceSettingsLocale:(NSString *)arg1 ;
-(void)setDeviceInputLocale:(NSString *)arg1 ;
-(void)setDeviceOutputLocale:(NSString *)arg1 ;
-(BOOL)hasDeviceSettingsLocale;
-(BOOL)hasDeviceInputLocale;
-(BOOL)hasDeviceOutputLocale;
-(NSString *)deviceSettingsLocale;
-(NSString *)deviceInputLocale;
-(NSString *)deviceOutputLocale;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
