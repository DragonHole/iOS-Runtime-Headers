/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface ICTableCellChangeNotifier : NSObject {

	NSHashTable* _observers;

}

@property (retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
-(void)notifyOfChangeAtColumnID:(id)arg1 rowID:(id)arg2 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
@end
