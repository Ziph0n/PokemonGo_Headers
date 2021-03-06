/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/UpsightStorableObject.h>

@class NSString;

@interface UpsightLogData : UpsightStorableObject {

	NSString* _name;
	NSString* _message;
	NSString* _file;
	NSString* _function;
	long long _lineNumber;
	long long _level;

}

@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * message;                //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * file;                   //@synthesize file=_file - In the implementation block
@property (nonatomic,retain) NSString * function;               //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) long long lineNumber;              //@synthesize lineNumber=_lineNumber - In the implementation block
@property (assign,nonatomic) long long level;                   //@synthesize level=_level - In the implementation block
-(id)initWithType:(id)arg1 version:(id)arg2 ID:(id)arg3 ;
-(id)initWithMessage:(id)arg1 loggingLevel:(long long)arg2 ;
-(long long)lineNumber;
-(NSString *)function;
-(void)setLineNumber:(long long)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setLevel:(long long)arg1 ;
-(long long)level;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setFunction:(NSString *)arg1 ;
-(void)setFile:(NSString *)arg1 ;
-(NSString *)file;
@end

