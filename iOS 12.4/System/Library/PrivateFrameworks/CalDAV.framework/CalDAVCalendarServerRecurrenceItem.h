/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _master;
	CoreDAVLeafItem* _recurrenceID;
	CalDAVCalendarServerChangesItem* _changes;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * master;                     //@synthesize master=_master - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * recurrenceID;                         //@synthesize recurrenceID=_recurrenceID - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerChangesItem * changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) BOOL isMaster; 
-(CoreDAVItemWithNoChildren *)master;
-(void)setMaster:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)copyParseRules;
-(void)setRecurrenceID:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)recurrenceID;
-(CalDAVCalendarServerChangesItem *)changes;
-(BOOL)isMaster;
-(void)setChanges:(CalDAVCalendarServerChangesItem *)arg1 ;
-(id)init;
@end
