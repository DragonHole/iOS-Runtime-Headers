/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface IKAppDataSet : NSObject <NSCopying> {

	NSArray* _itemIDs;
	NSArray* _items;
	NSDictionary* _usedPrototypesByType;
	NSDictionary* _indexTitles;

}

@property (nonatomic,copy,readonly) NSArray * items;                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * usedPrototypesByType;              //@synthesize usedPrototypesByType=_usedPrototypesByType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * indexTitles;                       //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemIDs;                                //@synthesize itemIDs=_itemIDs - In the implementation block
-(NSArray *)itemIDs;
-(id)initWithItems:(id)arg1 usedPrototypesByType:(id)arg2 indexTitles:(id)arg3 ;
-(NSDictionary *)usedPrototypesByType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(NSDictionary *)indexTitles;
@end
