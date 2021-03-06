/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableCoding : PBCodable <NSCopying> {

	NSString* _code;
	NSString* _system;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasSystem; 
@property (nonatomic,retain) NSString * system;               //@synthesize system=_system - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasCode; 
@property (nonatomic,retain) NSString * code;                 //@synthesize code=_code - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setCode:(NSString *)arg1 ;
-(BOOL)hasCode;
-(void)setSystem:(NSString *)arg1 ;
-(BOOL)hasSystem;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSString *)code;
-(id)dictionaryRepresentation;
-(NSString *)system;
-(void)copyTo:(id)arg1 ;
@end

