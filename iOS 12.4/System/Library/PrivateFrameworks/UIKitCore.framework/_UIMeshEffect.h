/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIVisualEffect.h>

@class CAMeshTransform;

@interface _UIMeshEffect : UIVisualEffect {

	CAMeshTransform* _meshTransform;
	CAMeshTransform* _identityMeshTransform;
	BOOL _underlayMesh;

}
+(id)meshEffectZoom:(double)arg1 ;
+(id)_underlayMeshEffectZoom:(double)arg1 ;
-(void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2 ;
-(id)_viewEntry;
@end
