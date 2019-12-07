/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringIDTracker.h>

@class NSString;

@interface TTMergeableStringSelection : NSObject <TTMergeableStringIDTracker> {

	vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >* _selectionRanges;
	unsigned long long _selectionAffinity;

}

@property (assign,nonatomic) unsigned long long selectionAffinity;              //@synthesize selectionAffinity=_selectionAffinity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithData:(id)arg1 ;
-(id)serialize;
-(unsigned long long)selectionAffinity;
-(void)setSelectionAffinity:(unsigned long long)arg1 ;
-(void)saveToArchive:(Selection*)arg1 ;
-(vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >*)selectionRanges;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(id)initWithArchive:(const Selection*)arg1 ;
@end
