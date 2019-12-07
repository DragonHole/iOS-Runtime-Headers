/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFGalleryWorkflow.h>

@class CKRecordID, NSString, NSNumber, WFWorkflowRecord, NSDate, WFFileRepresentation, WFWorkflowIcon;

@interface WFMutableGalleryWorkflow : WFGalleryWorkflow {

	CKRecordID* identifier;
	NSString* name;
	NSString* shortDescription;
	NSString* longDescription;
	NSNumber* searchable;
	WFWorkflowRecord* workflowRecord;
	NSDate* modifiedAt;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;
	WFFileRepresentation* shortcutFile;
	WFFileRepresentation* iconFile;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * shortDescription; 
@property (nonatomic,copy) NSString * longDescription; 
@property (nonatomic,retain) WFWorkflowIcon * icon; 
@property (nonatomic,retain) WFWorkflowRecord * workflowRecord; 
@property (nonatomic,retain) NSNumber * searchable; 
@property (nonatomic,retain) NSDate * modifiedAt; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
@property (nonatomic,retain) WFFileRepresentation * shortcutFile; 
@property (nonatomic,retain) WFFileRepresentation * iconFile; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)shortDescription;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(void)setBase:(CKRecordID *)arg1 ;
-(CKRecordID *)base;
-(NSString *)longDescription;
-(void)setLongDescription:(NSString *)arg1 ;
-(void)setSearchable:(NSNumber *)arg1 ;
-(void)setShortDescription:(NSString *)arg1 ;
-(NSDate *)modifiedAt;
-(void)setModifiedAt:(NSDate *)arg1 ;
-(WFWorkflowRecord *)workflowRecord;
-(NSNumber *)searchable;
-(WFFileRepresentation *)shortcutFile;
-(WFFileRepresentation *)iconFile;
-(void)setWorkflowRecord:(WFWorkflowRecord *)arg1 ;
-(void)setShortcutFile:(WFFileRepresentation *)arg1 ;
-(void)setIconFile:(WFFileRepresentation *)arg1 ;
@end
