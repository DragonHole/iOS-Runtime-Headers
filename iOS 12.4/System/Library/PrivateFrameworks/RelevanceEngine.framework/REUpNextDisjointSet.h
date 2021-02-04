/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable;

@interface REUpNextDisjointSet : NSObject <NSCopying> {

	NSMapTable* _nodes;

}

@property (nonatomic,readonly) unsigned long long count; 
-(BOOL)containsItem:(id)arg1 ;
-(void)connectItem:(id)arg1 withItem:(id)arg2 ;
-(id)allItemsConnectedToItem:(id)arg1 ;
-(BOOL)isItem:(id)arg1 connectedToItem:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
@end
