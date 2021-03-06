/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNode, NSString, NSArray;

@interface AVTComponentInstance : NSObject {

	SCNNode* _assetNode;
	NSString* _assetImage;
	NSArray* _assets;

}

@property (readonly) SCNNode * assetNode;                //@synthesize assetNode=_assetNode - In the implementation block
@property (readonly) NSString * assetImage;              //@synthesize assetImage=_assetImage - In the implementation block
+(id)assetNodeWithPath:(id)arg1 ;
-(NSString *)assetImage;
-(id)initWithComponent:(id)arg1 ;
-(void)_commonInit:(BOOL)arg1 component:(id)arg2 ;
-(SCNNode *)assetNode;
-(id)initWithComponent:(id)arg1 forCaching:(BOOL)arg2 ;
-(void)updateMaterialsWithComponent:(id)arg1 ;
-(BOOL)has2D;
-(BOOL)has3D;
-(void)dealloc;
@end

