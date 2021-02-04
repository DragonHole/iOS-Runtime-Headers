/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsSearchEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * searchTerm; 
@property (nonatomic,retain) NSString * actionType; 
@property (nonatomic,retain) id actionDetails; 
@property (nonatomic,retain) NSString * targetIdentifier; 
@property (nonatomic,retain) NSString * targetType; 
@property (nonatomic,retain) NSString * targetURL; 
-(NSString *)targetIdentifier;
-(id)actionDetails;
-(NSString *)targetURL;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(void)setTargetURL:(NSString *)arg1 ;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(void)setTargetType:(NSString *)arg1 ;
-(void)setActionDetails:(id)arg1 ;
-(NSString *)searchTerm;
-(NSString *)targetType;
-(void)setSearchTerm:(NSString *)arg1 ;
-(id)init;
@end
