/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHDDataValue : NSObject {

	CHDDataPoint* mDataPoint;

}
+(id)dataValue;
+(id)dataValueWithIndex:(long long)arg1 value:(EDValue*)arg2 ;
-(unsigned long long)contentFormatId;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(id)initWithIndex:(long long)arg1 value:(EDValue*)arg2 ;
-(CHDDataPoint*)dataPoint;
-(void)setDataPoint:(CHDDataPoint*)arg1 ;
-(id)contentFormatWithResources:(id)arg1 ;
-(void)setContentFormatWithResources:(id)arg1 resources:(id)arg2 ;
-(id)init;
-(id)description;
-(EDValue*)value;
-(void)setValue:(EDValue*)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
@end

