/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RTXPCActivityCriteria;

@interface RTXPCActivityRegistrant : NSObject {

	NSString* _identifier;
	RTXPCActivityCriteria* _criteria;
	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) RTXPCActivityCriteria * criteria;              //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,copy,readonly) id handler;                               //@synthesize handler=_handler - In the implementation block
-(RTXPCActivityCriteria *)criteria;
-(id)initWithIdentifier:(id)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(NSString *)identifier;
-(id)description;
-(id)handler;
@end

