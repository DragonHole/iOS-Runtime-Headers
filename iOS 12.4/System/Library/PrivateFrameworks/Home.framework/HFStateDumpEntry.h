/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HFStateDumpBuilderContext;

@interface HFStateDumpEntry : NSObject {

	NSString* _name;
	id _object;
	unsigned long long _options;
	HFStateDumpBuilderContext* _context;

}

@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id object;                                      //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) HFStateDumpBuilderContext * context;              //@synthesize context=_context - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setContext:(HFStateDumpBuilderContext *)arg1 ;
-(HFStateDumpBuilderContext *)context;
-(id)object;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 ;
@end

