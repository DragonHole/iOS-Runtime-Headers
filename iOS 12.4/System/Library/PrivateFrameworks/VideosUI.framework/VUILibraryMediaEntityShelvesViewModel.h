/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface VUILibraryMediaEntityShelvesViewModel : NSObject {

	NSArray* _shelfTypes;
	NSDictionary* _shelfViewControllerByShelfType;
	NSDictionary* _mediaEntitiesByShelfType;
	/*^block*/id _configureShelfViewControllerBlock;
	/*^block*/id _shelfTypeComparator;

}

@property (nonatomic,copy) id configureShelfViewControllerBlock;                         //@synthesize configureShelfViewControllerBlock=_configureShelfViewControllerBlock - In the implementation block
@property (nonatomic,copy) id shelfTypeComparator;                                       //@synthesize shelfTypeComparator=_shelfTypeComparator - In the implementation block
@property (nonatomic,retain) NSArray * shelfTypes;                                       //@synthesize shelfTypes=_shelfTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * shelfViewControllerByShelfType;              //@synthesize shelfViewControllerByShelfType=_shelfViewControllerByShelfType - In the implementation block
@property (nonatomic,readonly) NSDictionary * mediaEntitiesByShelfType;                  //@synthesize mediaEntitiesByShelfType=_mediaEntitiesByShelfType - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
+(id)_shelfTypesWithMediaEntitiesMap:(id)arg1 shelfTypeComparator:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)hasContent;
-(void)_updateWithMediaEntitiesMap:(id)arg1 shelfTypes:(id)arg2 ;
-(NSArray *)shelfTypes;
-(id)shelfTypeComparator;
-(NSDictionary *)shelfViewControllerByShelfType;
-(id)_shelfCollectionViewControllerWithType:(id)arg1 mediaEntities:(id)arg2 ;
-(void)setShelfTypes:(NSArray *)arg1 ;
-(void)setShelfViewControllerByShelfType:(NSDictionary *)arg1 ;
-(id)configureShelfViewControllerBlock;
-(id)initWithMediaEntitiesMap:(id)arg1 shelfTypeComparator:(/*^block*/id)arg2 configureShelfViewControllerBlock:(/*^block*/id)arg3 ;
-(void)updateContainerCollectionView:(id)arg1 section:(unsigned long long)arg2 mediaEntitiesMap:(id)arg3 mediaEntitiesChangeSetMap:(id)arg4 ;
-(id)shelfViewControllerForShelfTypeIndex:(unsigned long long)arg1 ;
-(NSDictionary *)mediaEntitiesByShelfType;
-(void)setConfigureShelfViewControllerBlock:(id)arg1 ;
-(void)setShelfTypeComparator:(id)arg1 ;
@end

