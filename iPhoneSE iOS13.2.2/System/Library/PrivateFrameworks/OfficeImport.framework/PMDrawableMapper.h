/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDrawableMapper.h>

@class OADShape, CMDrawingContext;

@interface PMDrawableMapper : CMDrawableMapper {

	OADShape* mShape;
	CMDrawingContext* mDrawingContext;
	BOOL mTopLevelMapper;

}
-(id)drawingContext;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDiagramAt:(id)arg1 withState:(id)arg2 ;
-(void)mapBounds;
-(CGRect)transformRectToPage:(CGRect)arg1 ;
-(void)mapChartAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)slideRect;
-(void)setTopLevelMapper:(BOOL)arg1 ;
-(void)setDrawingContext:(id)arg1 ;
-(BOOL)isTopLevelMapper;
-(void)mapRectangularShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapShapeAsBackgroundAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)shapeTextBoxWithState:(id)arg1 ;
-(void)mapFreeForm:(id)arg1 orientedBounds:(id)arg2 transformedBounds:(CGRect*)arg3 state:(id)arg4 ;
@end

