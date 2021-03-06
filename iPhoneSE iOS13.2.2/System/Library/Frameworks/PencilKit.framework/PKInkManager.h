/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PKInkManager : NSObject {

	NSMutableDictionary* _inks;

}

@property (nonatomic,readonly) NSMutableDictionary * inks;              //@synthesize inks=_inks - In the implementation block
+(void)clearCachedManager;
+(id)defaultInkManager;
-(id)init;
-(id)inkBehaviorForIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3 ;
-(id)inkBehaviorForIdentifier:(id)arg1 variant:(id)arg2 ;
-(NSMutableDictionary *)inks;
@end

