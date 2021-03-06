/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPLayoutTarget;
#import <SilexText/SilexText-Structs.h>
@class TSWPColumn, TSDLayout, TSDWrapPolygon, TSUPointerKeyDictionary;

@interface STTextTangierTextWrapContext : NSObject {

	TSWPColumn* _column;
	TSDLayout*<TSWPLayoutTarget> _target;
	TSDWrapPolygon* _interiorWrapPolygon;
	TSUPointerKeyDictionary* _wrapPathInverseTransformInRootDictionary;
	CGAffineTransform _targetInverseTransformInRoot;

}

@property (nonatomic,retain) TSUPointerKeyDictionary * wrapPathInverseTransformInRootDictionary;              //@synthesize wrapPathInverseTransformInRootDictionary=_wrapPathInverseTransformInRootDictionary - In the implementation block
@property (nonatomic,readonly) TSWPColumn * column;                                                           //@synthesize column=_column - In the implementation block
@property (nonatomic,__weak,readonly) TSDLayout*<TSWPLayoutTarget> target;                                    //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) TSDWrapPolygon * interiorWrapPolygon;                                          //@synthesize interiorWrapPolygon=_interiorWrapPolygon - In the implementation block
@property (nonatomic,readonly) CGAffineTransform targetInverseTransformInRoot;                                //@synthesize targetInverseTransformInRoot=_targetInverseTransformInRoot - In the implementation block
-(TSDWrapPolygon *)interiorWrapPolygon;
-(TSWPColumn *)column;
-(TSUPointerKeyDictionary *)wrapPathInverseTransformInRootDictionary;
-(id)initWithColumn:(id)arg1 targetLayout:(id)arg2 ;
-(id)transformedWrapPolygonForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(CGAffineTransform)arg2 ;
-(CGAffineTransform)targetInverseTransformInRoot;
-(void)setWrapPathInverseTransformInRootDictionary:(TSUPointerKeyDictionary *)arg1 ;
-(void)setTarget:(TSDLayout*<TSWPLayoutTarget>)arg1 ;
-(TSDLayout*<TSWPLayoutTarget>)target;
@end

