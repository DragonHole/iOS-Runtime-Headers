/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NFNdefMessage <NSObject>
@property (nonatomic,readonly) NSArray * records; 
@required
-(id)asData;
-(id)decode;
-(id)initWithNDEFMessage:(id)arg1;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2;
-(NSArray *)records;
-(void)addRecord:(id)arg1;

@end

