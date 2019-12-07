/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsMeCardObserver.h>
#import <MapsSuggestions/MapsSuggestionsMeCardReader.h>

@protocol MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor;
@class MapsSuggestionsRoutine, MapsSuggestionsContacts, MapsSuggestionsMeCard, MapsSuggestionsObservers, NSArray, NSString;

@interface MapsSuggestionsShortcutManager : NSObject <MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader> {

	Queue _queue;
	id<MapsSuggestionsShortcutStorage> _storage;
	id<MapsSuggestionsShortcutSuggestor> _suggestor;
	MapsSuggestionsRoutine* _routine;
	MapsSuggestionsContacts* _contacts;
	NSMutableArray* _hiddenShortcuts;
	MapsSuggestionsMeCard* _rawMeCard;
	NSArray* _shortcutsOverlay;
	MapsSuggestionsObservers* _meCardObservers;
	MapsSuggestionsMeCard* _currCorrectedMeCard;
	NSArray* _rawHomeAddressStrings;
	NSArray* _rawWorkAddressStrings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)storage;
-(void)setChangeHandler:(/*^block*/id)arg1 ;
-(NSString *)uniqueName;
-(id)initWithDefaults;
-(id)routine;
-(void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2 ;
-(BOOL)readMeCardWithHandler:(/*^block*/id)arg1 ;
-(void)addMeCardObserver:(id)arg1 ;
-(void)removeMeCardObserver:(id)arg1 ;
-(id)initWithStorage:(id)arg1 suggestor:(id)arg2 contacts:(id)arg3 routine:(id)arg4 ;
-(BOOL)addOrUpdateShortcuts:(NSArray*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_mergeShortcutsToMeCardAndCallHandler:(/*^block*/id)arg1 ;
-(BOOL)loadAllShortcutsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)__loadCorrectedMeCardWithHandler:(/*^block*/id)arg1 ;
-(BOOL)_loadCorrectedMeCardWithHandler:(/*^block*/id)arg1 ;
-(BOOL)removeShortcuts:(NSArray*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSArray*)test_setUpPlaceholdersIfNeeded:(id)arg1 overlays:(NSArray*)arg2 ;
-(void)test_sortMapsSuggestionsShortcuts:(NSMutableArray*)arg1 ;
-(BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 withSnapshot:(NSArray*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)proposeAdditionalShortcutsOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)suggestor;
@end
