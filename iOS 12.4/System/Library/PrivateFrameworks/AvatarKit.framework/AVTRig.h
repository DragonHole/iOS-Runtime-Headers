/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVTMemoji;

@interface AVTRig : NSObject {

	long long _type;
	double _scale;
	double _elevation;
	double _spacing;
	double _rotation;
	AVTMemoji* _owner;

}

@property (readonly) long long type; 
@property (assign) double scale; 
@property (assign) double elevation; 
@property (assign) double spacing; 
@property (assign) double rotation; 
@property (readonly) long long scaleMode; 
@property (readonly) long long rotationMode; 
-(long long)scaleMode;
-(void)resetToDefault;
-(long long)rotationMode;
-(double)elevation;
-(void)setElevation:(double)arg1 ;
-(void)_encode:(id)arg1 ;
-(void)_decode:(id)arg1 ;
-(id)initWithType:(long long)arg1 memoji:(id)arg2 ;
-(void)randomize;
-(void)setFromRig:(id)arg1 ;
-(id)init;
-(double)scale;
-(long long)type;
-(void)setScale:(double)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
@end

