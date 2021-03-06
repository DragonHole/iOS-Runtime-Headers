/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXColumnLayout, SXComponentTextStyle;

@interface SXTextResizer : NSObject {

	SXColumnLayout* _columnLayout;
	SXComponentTextStyle* _defaultTextStyle;

}

@property (nonatomic,retain) SXColumnLayout * columnLayout;                        //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,retain) SXComponentTextStyle * defaultTextStyle;              //@synthesize defaultTextStyle=_defaultTextStyle - In the implementation block
-(SXColumnLayout *)columnLayout;
-(id)initWithColumnLayout:(id)arg1 andDefaultTextStyle:(id)arg2 ;
-(long long)resizeTextSize:(long long)arg1 fontResizingThreshold:(double)arg2 fontSizeConstant:(double)arg3 contentSizeCategory:(id)arg4 fontTextStyle:(id)arg5 ;
-(double)normalizedFontSizeForSize:(double)arg1 ;
-(unsigned long long)resizeDropCapNumberOfLines:(long long)arg1 ;
-(void)setColumnLayout:(SXColumnLayout *)arg1 ;
-(void)setDefaultTextStyle:(SXComponentTextStyle *)arg1 ;
-(SXComponentTextStyle *)defaultTextStyle;
@end

