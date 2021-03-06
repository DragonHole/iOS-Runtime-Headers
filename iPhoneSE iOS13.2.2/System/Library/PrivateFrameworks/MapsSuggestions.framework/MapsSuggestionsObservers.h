/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@class NSHashTable, NSString;

@interface MapsSuggestionsObservers : NSObject <MapsSuggestionsObject> {

	NSString* _name;
	unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue> >* _callbackQueue;
	NSHashTable* _innerObservers;
	/*^block*/id _onFirstObserverBlock;
	/*^block*/id _onLastObserverBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)count;
-(unsigned long long)_count;
-(id)initWithName:(NSString*)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)enumerateWithBlock:(/*^block*/id)arg1 ;
-(NSString *)uniqueName;
-(id)initWithCallbackQueue:(id)arg1 name:(NSString*)arg2 strong:(BOOL)arg3 ;
-(id)initWithCallbackQueue:(id)arg1 name:(NSString*)arg2 ;
-(void)onAddingObserverRunBlock:(/*^block*/id)arg1 ;
-(void)onRemovingObserverRunBlock:(/*^block*/id)arg1 ;
-(BOOL)synchronouslyEnumerateWithBlock:(/*^block*/id)arg1 ;
@end

