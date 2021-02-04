/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CSLUIPBNumber : PBCodable <NSCopying> {

	double _doubleValue;
	long long _int64Value;
	float _floatValue;
	int _int32Value;
	BOOL _boolValue;
	SCD_Struct_CS1 _has;

}

@property (assign,nonatomic) BOOL hasInt32Value; 
@property (assign,nonatomic) int int32Value;                    //@synthesize int32Value=_int32Value - In the implementation block
@property (assign,nonatomic) BOOL hasFloatValue; 
@property (assign,nonatomic) float floatValue;                  //@synthesize floatValue=_floatValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasBoolValue; 
@property (assign,nonatomic) BOOL boolValue;                    //@synthesize boolValue=_boolValue - In the implementation block
@property (assign,nonatomic) BOOL hasInt64Value; 
@property (assign,nonatomic) long long int64Value;              //@synthesize int64Value=_int64Value - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setHasBoolValue:(BOOL)arg1 ;
-(BOOL)hasBoolValue;
-(void)setInt32Value:(int)arg1 ;
-(void)setHasInt32Value:(BOOL)arg1 ;
-(BOOL)hasInt32Value;
-(void)setHasFloatValue:(BOOL)arg1 ;
-(BOOL)hasFloatValue;
-(void)setInt64Value:(long long)arg1 ;
-(void)setHasInt64Value:(BOOL)arg1 ;
-(BOOL)hasInt64Value;
-(int)int32Value;
-(long long)int64Value;
-(void)setFloatValue:(float)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)boolValue;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)floatValue;
-(double)doubleValue;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
@end
