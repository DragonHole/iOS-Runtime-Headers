/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringUndoCommand.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand> {

	NSMutableDictionary* _seen;
	NSMutableArray* _commands;

}

@property (nonatomic,retain) NSMutableDictionary * seen;              //@synthesize seen=_seen - In the implementation block
@property (nonatomic,retain) NSMutableArray * commands;               //@synthesize commands=_commands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)commands;
-(void)setCommands:(NSMutableArray *)arg1 ;
-(void)setSeen:(NSMutableDictionary *)arg1 ;
-(void)addCommand:(id)arg1 ;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(BOOL)addSeenRange:(TopoIDRange)arg1 ;
-(BOOL)addToGroup:(id)arg1 ;
-(NSMutableDictionary *)seen;
-(void)closeGroup;
-(id)init;
-(NSString *)description;
-(void)applyToString:(id)arg1 ;
@end

