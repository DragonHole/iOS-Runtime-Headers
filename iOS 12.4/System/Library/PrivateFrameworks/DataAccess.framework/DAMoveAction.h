/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAAction.h>

@class NSString;

@interface DAMoveAction : DAAction {

	NSString* _sourceContainerId;
	NSString* _sourceServerId;
	NSString* _destinationContainerId;

}

@property (nonatomic,retain) NSString * sourceContainerId;                   //@synthesize sourceContainerId=_sourceContainerId - In the implementation block
@property (nonatomic,retain) NSString * sourceServerId;                      //@synthesize sourceServerId=_sourceServerId - In the implementation block
@property (nonatomic,retain) NSString * destinationContainerId;              //@synthesize destinationContainerId=_destinationContainerId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceContainerId:(NSString *)arg1 ;
-(void)setSourceServerId:(NSString *)arg1 ;
-(void)setDestinationContainerId:(NSString *)arg1 ;
-(NSString *)sourceContainerId;
-(NSString *)sourceServerId;
-(NSString *)destinationContainerId;
-(id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

