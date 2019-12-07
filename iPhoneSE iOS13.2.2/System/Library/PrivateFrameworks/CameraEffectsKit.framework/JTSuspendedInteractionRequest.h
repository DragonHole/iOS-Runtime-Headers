/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface JTSuspendedInteractionRequest : NSObject {

	NSString* _tag;
	NSArray* _excludedChildViewControllers;

}

@property (nonatomic,retain) NSString * tag;                                      //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSArray * excludedChildViewControllers;              //@synthesize excludedChildViewControllers=_excludedChildViewControllers - In the implementation block
+(id)requestWithTag:(id)arg1 excludedViewControllers:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)setExcludedChildViewControllers:(NSArray *)arg1 ;
-(NSArray *)excludedChildViewControllers;
@end
