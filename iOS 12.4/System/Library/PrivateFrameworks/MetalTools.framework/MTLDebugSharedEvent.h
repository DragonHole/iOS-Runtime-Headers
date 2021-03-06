/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsSharedEvent.h>

@class NSMapTable;

@interface MTLDebugSharedEvent : MTLToolsSharedEvent {

	mutex _resourceMapLock;
	unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long> > >* _valueToCountMap;
	NSMapTable* _valueToResourcesMap;

}
+(id)sharedListener;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)setSignaledValue:(unsigned long long)arg1 ;
-(void)releaseWritableResourcesForValue:(unsigned long long)arg1 ;
-(void)setWritableResources:(id)arg1 forValue:(unsigned long long)arg2 ;
-(void)retainWritableResourcesForValue:(unsigned long long)arg1 ;
-(void)_retainWritableResourcesForValue:(unsigned long long)arg1 ;
-(id)removeWritableResourcesForValue:(unsigned long long)arg1 ;
-(void)dealloc;
@end

