/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AVTPuppetStore : NSObject {

	NSArray* _puppetRecords;

}

@property (nonatomic,copy) NSArray * puppetRecords;              //@synthesize puppetRecords=_puppetRecords - In the implementation block
+(id)createPuppetRecords;
-(void)setPuppetRecords:(NSArray *)arg1 ;
-(NSArray *)puppetRecords;
-(id)avatarPuppetsForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)avatarsWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)loadPuppetRecordsIfNeeded;
-(id)allAvatarPuppetsWithError:(id*)arg1 ;
-(id)allPuppetRecords;
-(id)initWithEnvironment:(id)arg1 ;
@end

