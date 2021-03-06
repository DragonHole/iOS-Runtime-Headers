/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PRSRankingCosineComponents : NSObject {

	NSArray* _TermFrequencies;
	NSArray* _TermFrequenciesWeighted;
	NSArray* _InverseDocFrequencies;
	NSArray* _TermInverseDoc;
	NSArray* _TermInverseDocWeighted;
	unsigned long long _fieldLength;

}

@property (nonatomic,retain) NSArray * TermFrequencies;                      //@synthesize TermFrequencies=_TermFrequencies - In the implementation block
@property (nonatomic,retain) NSArray * TermFrequenciesWeighted;              //@synthesize TermFrequenciesWeighted=_TermFrequenciesWeighted - In the implementation block
@property (nonatomic,retain) NSArray * InverseDocFrequencies;                //@synthesize InverseDocFrequencies=_InverseDocFrequencies - In the implementation block
@property (nonatomic,retain) NSArray * TermInverseDoc;                       //@synthesize TermInverseDoc=_TermInverseDoc - In the implementation block
@property (nonatomic,retain) NSArray * TermInverseDocWeighted;               //@synthesize TermInverseDocWeighted=_TermInverseDocWeighted - In the implementation block
@property (assign,nonatomic) unsigned long long fieldLength;                 //@synthesize fieldLength=_fieldLength - In the implementation block
-(NSArray *)TermFrequencies;
-(void)setTermFrequencies:(NSArray *)arg1 ;
-(NSArray *)TermFrequenciesWeighted;
-(void)setTermFrequenciesWeighted:(NSArray *)arg1 ;
-(NSArray *)InverseDocFrequencies;
-(void)setInverseDocFrequencies:(NSArray *)arg1 ;
-(NSArray *)TermInverseDoc;
-(void)setTermInverseDoc:(NSArray *)arg1 ;
-(NSArray *)TermInverseDocWeighted;
-(void)setTermInverseDocWeighted:(NSArray *)arg1 ;
-(void)setFieldLength:(unsigned long long)arg1 ;
-(unsigned long long)fieldLength;
@end

