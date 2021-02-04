/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLKFont;

@interface NTKOneColumnModularSmallLayoutAttributes : NSObject {

	CLKFont* _subtitleFont;
	double _subtitleBaselineOffset;
	double _marginWidth;
	double _imageOriginY;
	double _imageHeight;
	double _minimumFontSize;
	CLKFont* _titleFont;
	double _titleBaselineOffset;

}

@property (nonatomic,retain) CLKFont * subtitleFont;                     //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (assign,nonatomic) double subtitleBaselineOffset;              //@synthesize subtitleBaselineOffset=_subtitleBaselineOffset - In the implementation block
@property (assign,nonatomic) double marginWidth;                         //@synthesize marginWidth=_marginWidth - In the implementation block
@property (assign,nonatomic) double imageOriginY;                        //@synthesize imageOriginY=_imageOriginY - In the implementation block
@property (assign,nonatomic) double imageHeight;                         //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) double minimumFontSize;                     //@synthesize minimumFontSize=_minimumFontSize - In the implementation block
@property (nonatomic,retain) CLKFont * titleFont;                        //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) double titleBaselineOffset;                 //@synthesize titleBaselineOffset=_titleBaselineOffset - In the implementation block
+(id)attributesForTemplate:(id)arg1 forDevice:(id)arg2 ;
-(void)setImageHeight:(double)arg1 ;
-(double)imageHeight;
-(double)titleBaselineOffset;
-(double)subtitleBaselineOffset;
-(double)marginWidth;
-(double)imageOriginY;
-(void)setSubtitleBaselineOffset:(double)arg1 ;
-(void)setTitleBaselineOffset:(double)arg1 ;
-(void)setMarginWidth:(double)arg1 ;
-(void)setImageOriginY:(double)arg1 ;
-(CLKFont *)titleFont;
-(void)setTitleFont:(CLKFont *)arg1 ;
-(CLKFont *)subtitleFont;
-(void)setSubtitleFont:(CLKFont *)arg1 ;
-(void)setMinimumFontSize:(double)arg1 ;
-(double)minimumFontSize;
@end
