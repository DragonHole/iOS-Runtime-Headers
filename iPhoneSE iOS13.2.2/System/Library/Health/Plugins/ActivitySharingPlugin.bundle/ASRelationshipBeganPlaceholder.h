/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface ASRelationshipBeganPlaceholder : NSObject {

	id _token;
	NSSet* _blocksWaitingOnSuccess;

}

@property (nonatomic,readonly) id token;                                    //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSSet * blocksWaitingOnSuccess;              //@synthesize blocksWaitingOnSuccess=_blocksWaitingOnSuccess - In the implementation block
-(id)token;
-(id)initWithToken:(id)arg1 ;
-(void)registerBlockWaitingOnSuccess:(/*^block*/id)arg1 ;
-(NSSet *)blocksWaitingOnSuccess;
@end

