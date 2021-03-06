/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoLivePhotoFrameInstruction : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	SCD_Struct_VC45* _homographyParams;
	long long _timeValue;

}

@property (assign,nonatomic) long long timeValue;                                     //@synthesize timeValue=_timeValue - In the implementation block
@property (nonatomic,readonly) unsigned long long homographyParamsCount; 
@property (nonatomic,readonly) float* homographyParams; 
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)exportToLegacyDictionary;
-(unsigned long long)homographyParamsCount;
-(void)clearHomographyParams;
-(float)homographyParamAtIndex:(unsigned long long)arg1 ;
-(void)addHomographyParam:(float)arg1 ;
-(float*)homographyParams;
-(void)setHomographyParams:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setTimeValue:(long long)arg1 ;
-(long long)timeValue;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

