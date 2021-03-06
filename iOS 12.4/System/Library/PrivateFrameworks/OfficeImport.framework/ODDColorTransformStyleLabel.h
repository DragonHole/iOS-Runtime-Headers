/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ODDFillColorList;

@interface ODDColorTransformStyleLabel : NSObject {

	ODDFillColorList* mFillColors;
	ODDFillColorList* mLineColors;
	ODDFillColorList* mEffectColors;
	ODDFillColorList* mTextLineColors;
	ODDFillColorList* mTextFillColors;
	ODDFillColorList* mTextEffectColors;

}
-(void)applyToShapeStyle:(id)arg1 index:(unsigned)arg2 count:(unsigned)arg3 state:(id)arg4 ;
-(id)fillColors;
-(id)lineColors;
-(id)effectColors;
-(id)textFillColors;
-(id)textLineColors;
-(id)textEffectColors;
-(void)setFillColors:(id)arg1 ;
-(void)setLineColors:(id)arg1 ;
-(void)setEffectColors:(id)arg1 ;
-(void)setTextLineColors:(id)arg1 ;
-(void)setTextFillColors:(id)arg1 ;
-(void)setTextEffectColors:(id)arg1 ;
-(void)dealloc;
@end

