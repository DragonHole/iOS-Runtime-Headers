/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface DUDictionaryManager : NSObject {

	BOOL _initiallyEmptyAssets;
	NSArray* _availableDefinitionDictionaries;

}

@property (readonly) NSArray * availableDefinitionDictionaries;              //@synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries - In the implementation block
+(id)assetManager;
-(id)init;
-(NSArray *)availableDefinitionDictionaries;
-(id)_allAvailableDefinitionDictionaries;
-(void)_downloadDictionaryAssetCatalog:(/*^block*/id)arg1 ;
-(id)_definitionValuesForTerm:(id)arg1 ;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)_dictionaryAssetType;
-(id)_availableDictionaryAssets;
-(void)_migrateInstalledStateForNewDictionaries:(id)arg1 ;
@end

