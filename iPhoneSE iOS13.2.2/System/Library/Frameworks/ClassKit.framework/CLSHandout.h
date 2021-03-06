/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString, NSDate, NSError, CLSClass, NSArray;

@interface CLSHandout : CLSObject <CLSRelationable> {

	NSString* _title;
	NSString* _instructions;
	NSDate* _dueDate;
	BOOL _reviewed;
	NSDate* _dateOfPublication;
	long long _state;
	long long _publishingState;
	NSError* _publishError;
	NSDate* _dateLastReviewed;

}

@property (nonatomic,readonly) CLSClass * effectiveClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * dateOfPublication;                   //@synthesize dateOfPublication=_dateOfPublication - In the implementation block
@property (assign,nonatomic) long long state;                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long publishingState;                    //@synthesize publishingState=_publishingState - In the implementation block
@property (nonatomic,retain) NSError * publishError;                       //@synthesize publishError=_publishError - In the implementation block
@property (nonatomic,retain) NSDate * dateLastReviewed;                    //@synthesize dateLastReviewed=_dateLastReviewed - In the implementation block
@property (nonatomic,retain) NSDate * lastReviewedDate; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * instructions; 
@property (nonatomic,retain) NSDate * dueDate; 
@property (nonatomic,readonly) NSArray * recipients; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (assign,getter=isReviewed,nonatomic) BOOL reviewed; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSArray *)attachments;
-(id)dictionaryRepresentation;
-(long long)state;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSArray *)recipients;
-(NSString *)instructions;
-(void)setInstructions:(NSString *)arg1 ;
-(NSDate *)dueDate;
-(void)setDueDate:(NSDate *)arg1 ;
-(void)mergeWithObject:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(BOOL)isReviewed;
-(void)setLastReviewedDate:(NSDate *)arg1 ;
-(NSDate *)lastReviewedDate;
-(long long)publishingState;
-(void)setReviewed:(BOOL)arg1 ;
-(NSDate *)dateLastReviewed;
-(void)addHandoutAttachment:(id)arg1 ;
-(void)removeHandoutAttachment:(id)arg1 ;
-(void)addHandoutRecipient:(id)arg1 ;
-(void)removeHandoutRecipient:(id)arg1 ;
-(NSDate *)dateOfPublication;
-(void)setDateOfPublication:(NSDate *)arg1 ;
-(void)setPublishingState:(long long)arg1 ;
-(NSError *)publishError;
-(void)setPublishError:(NSError *)arg1 ;
-(void)setDateLastReviewed:(NSDate *)arg1 ;
-(CLSClass *)effectiveClass;
@end

