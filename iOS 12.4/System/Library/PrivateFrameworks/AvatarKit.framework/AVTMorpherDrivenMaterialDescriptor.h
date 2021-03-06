/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNode, SCNMaterial, NSString;

@interface AVTMorpherDrivenMaterialDescriptor : NSObject {

	SCNNode* _readMorpherNode;
	long long _morphTargetIndex;
	SCNMaterial* _material;
	NSString* _propertyName;

}

@property (nonatomic,retain) SCNNode * readMorpherNode;               //@synthesize readMorpherNode=_readMorpherNode - In the implementation block
@property (assign,nonatomic) long long morphTargetIndex;              //@synthesize morphTargetIndex=_morphTargetIndex - In the implementation block
@property (nonatomic,retain) SCNMaterial * material;                  //@synthesize material=_material - In the implementation block
@property (nonatomic,copy) NSString * propertyName;                   //@synthesize propertyName=_propertyName - In the implementation block
-(void)setPropertyName:(NSString *)arg1 ;
-(SCNNode *)readMorpherNode;
-(void)setReadMorpherNode:(SCNNode *)arg1 ;
-(long long)morphTargetIndex;
-(void)setMorphTargetIndex:(long long)arg1 ;
-(void)setMaterial:(SCNMaterial *)arg1 ;
-(SCNMaterial *)material;
-(NSString *)propertyName;
@end

