/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNHitTestResult : NSObject {

	C3DHitTestResultRef _result;

}

@property (nonatomic,readonly)  simdLocalCoordinates; 
@property (nonatomic,readonly)  simdWorldCoordinates; 
@property (nonatomic,readonly)  simdLocalNormal; 
@property (nonatomic,readonly)  simdWorldNormal; 
@property (nonatomic,readonly) SCD_Struct_SC14 simdModelTransform; 
@property (nonatomic,readonly) SCNNode * node; 
@property (nonatomic,readonly) long long geometryIndex; 
@property (nonatomic,readonly) long long faceIndex; 
@property (nonatomic,readonly) SCNVector3 localCoordinates; 
@property (nonatomic,readonly) SCNVector3 worldCoordinates; 
@property (nonatomic,readonly) SCNVector3 localNormal; 
@property (nonatomic,readonly) SCNVector3 worldNormal; 
@property (nonatomic,readonly) SCNMatrix4 modelTransform; 
@property (nonatomic,readonly) SCNNode * boneNode; 
+(id)hitTestResultsFromHitTestResultRef:(CFArrayRef)arg1 ;
-(SCNVector3)worldCoordinates;
-()simdLocalCoordinates;
-()simdWorldCoordinates;
-()simdLocalNormal;
-()simdWorldNormal;
-(CGPoint)textureCoordinatesWithMappingChannel:(long long)arg1 ;
-(long long)geometryIndex;
-(SCNNode *)boneNode;
-(long long)faceIndex;
-(SCNVector3)localNormal;
-(SCNVector3)worldNormal;
-(CGPoint)textureCoordinate;
-(SCNMatrix4)modelTransform;
-(SCD_Struct_SC14)simdModelTransform;
-(id)initWithResult:(C3DHitTestResultRef)arg1 ;
-(SCNVector3)localCoordinates;
-(void)dealloc;
-(id)description;
-(SCNNode *)node;
@end

