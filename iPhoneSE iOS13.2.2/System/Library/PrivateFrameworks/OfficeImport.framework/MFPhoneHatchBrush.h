/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/MFPhoneBrush.h>

@class OITSUColor;

@interface MFPhoneHatchBrush : MFPhoneBrush {

	OITSUColor* m_colour;
	int m_style;

}
+(id)hatchBrushWithColour:(id)arg1 in_style:(int)arg2 ;
+(id)patternNameForHatchStyle:(int)arg1 ;
-(void)fillPath:(id)arg1 in_path:(id)arg2 ;
-(id)initWithColour:(id)arg1 in_style:(int)arg2 ;
@end

