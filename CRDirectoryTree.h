/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CRDirectoryTree : NSObject {

	NSString* _rootDirectory;
	NSString* _beginDirectory;
	NSString* _normalDirectory;
	NSString* _sendDirectory;
	NSString* _sentDirectory;

}

@property (nonatomic,readonly) NSString * rootDirectory;                //@synthesize rootDirectory=_rootDirectory - In the implementation block
@property (nonatomic,readonly) NSString * beginDirectory;               //@synthesize beginDirectory=_beginDirectory - In the implementation block
@property (nonatomic,readonly) NSString * normalDirectory;              //@synthesize normalDirectory=_normalDirectory - In the implementation block
@property (nonatomic,readonly) NSString * sendDirectory;                //@synthesize sendDirectory=_sendDirectory - In the implementation block
@property (nonatomic,readonly) NSString * sentDirectory;                //@synthesize sentDirectory=_sentDirectory - In the implementation block
+(id)sharedInstance;
-(NSString *)sendDirectory;
-(NSString *)sentDirectory;
-(BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(void)moveItemsFrom:(id)arg1 toDirectory:(id)arg2 ;
-(NSString *)normalDirectory;
-(BOOL)removeItemAtPath:(id)arg1 ;
-(NSString *)beginDirectory;
-(id)createDirectory:(id)arg1 ;
-(id)absolutePath:(id)arg1 ;
-(void)initFileSystem;
-(id)createRootDirectory;
-(void)resetDirectory:(id)arg1 ;
-(NSString *)rootDirectory;
-(id)init;
-(void)reset;
@end
