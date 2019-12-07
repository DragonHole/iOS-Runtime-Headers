/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/SISchemaUserDataContainer.h>
@class NSData;


@protocol SISchemaUserDataContainer <NSObject>
@property (nonatomic,copy) NSData * c; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)c;
-(void)setC:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface SISchemaUserDataContainer : PBCodable <SISchemaUserDataContainer, NSSecureCoding> {

	NSData* _c;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (c,nonatomic,copy) NSData * c;                            //@synthesize c=_c - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)c;
-(void)setC:(NSData *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end
