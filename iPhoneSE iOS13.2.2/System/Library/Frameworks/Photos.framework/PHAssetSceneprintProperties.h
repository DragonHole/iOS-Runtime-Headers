/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSData;

@interface PHAssetSceneprintProperties : PHAssetPropertySet {

	NSData* _sceneprint;

}

@property (nonatomic,readonly) NSData * sceneprint;              //@synthesize sceneprint=_sceneprint - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSData *)sceneprint;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

