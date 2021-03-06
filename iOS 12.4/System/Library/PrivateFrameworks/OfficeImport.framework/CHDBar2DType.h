/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDChartTypeWithGrouping.h>

@interface CHDBar2DType : CHDChartTypeWithGrouping {

	int mGapWidth;
	BOOL mColumn;
	int mOverlap;

}
-(void)setColumn:(BOOL)arg1 ;
-(BOOL)isColumn;
-(id)initWithChart:(id)arg1 ;
-(void)setOverlap:(int)arg1 ;
-(void)setGapWidth:(int)arg1 ;
-(int)gapWidth;
-(int)overlap;
-(int)defaultLabelPosition;
-(BOOL)isHorizontal;
@end

