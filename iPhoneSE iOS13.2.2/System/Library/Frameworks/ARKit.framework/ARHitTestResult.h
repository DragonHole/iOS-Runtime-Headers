/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKit/ARKit-Structs.h>
@class ARAnchor;

@interface ARHitTestResult : NSObject {

	unsigned long long _type;
	double _distance;
	ARAnchor* _anchor;
	SCD_Struct_AR12 _localTransform;
	SCD_Struct_AR12 _worldTransform;

}

@property (nonatomic,retain) ARAnchor * anchor;                           //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) double distance;                             //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR12 localTransform;              //@synthesize localTransform=_localTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR12 worldTransform;              //@synthesize worldTransform=_worldTransform - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                   //@synthesize type=_type - In the implementation block
-(id)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)debugQuickLookObject;
-(ARAnchor *)anchor;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)setAnchor:(ARAnchor *)arg1 ;
-(void)setLocalTransform:(SCD_Struct_AR12)arg1 ;
-(SCD_Struct_AR12)localTransform;
-(SCD_Struct_AR12)worldTransform;
-(void)setWorldTransform:(SCD_Struct_AR12)arg1 ;
-(id)_description:(BOOL)arg1 ;
@end
