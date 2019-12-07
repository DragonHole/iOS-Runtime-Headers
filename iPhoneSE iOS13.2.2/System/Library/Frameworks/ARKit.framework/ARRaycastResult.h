/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKit/ARKit-Structs.h>
@class ARAnchor, NSUUID;

@interface ARRaycastResult : NSObject {

	long long _target;
	long long _targetAlignment;
	ARAnchor* _anchor;
	NSUUID* _anchorIdentifier;
	SCD_Struct_AR12 _worldTransform;
	SCD_Struct_AR12 _localTransform;

}

@property (assign,nonatomic) long long target;                              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) ARAnchor * anchor;                             //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR12 localTransform;                //@synthesize localTransform=_localTransform - In the implementation block
@property (nonatomic,retain) NSUUID * anchorIdentifier;                     //@synthesize anchorIdentifier=_anchorIdentifier - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR12 worldTransform;              //@synthesize worldTransform=_worldTransform - In the implementation block
@property (nonatomic,readonly) long long targetAlignment;                   //@synthesize targetAlignment=_targetAlignment - In the implementation block
-(id)description;
-(void)setTarget:(long long)arg1 ;
-(long long)target;
-(ARAnchor *)anchor;
-(void)setAnchor:(ARAnchor *)arg1 ;
-(void)setLocalTransform:(SCD_Struct_AR12)arg1 ;
-(SCD_Struct_AR12)localTransform;
-(SCD_Struct_AR12)worldTransform;
-(id)_description:(BOOL)arg1 ;
-(long long)targetAlignment;
-(id)initWithWorldTransform:(SCD_Struct_AR12)arg1 target:(long long)arg2 targetAlignment:(long long)arg3 ;
-(NSUUID *)anchorIdentifier;
-(void)setAnchorIdentifier:(NSUUID *)arg1 ;
@end
